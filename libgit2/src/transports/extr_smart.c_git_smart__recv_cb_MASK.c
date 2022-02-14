
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int val; } ;
struct TYPE_7__ {int (* packetsize_cb ) (size_t,int ) ;TYPE_5__ cancelled; int packetsize_payload; TYPE_3__* current_stream; } ;
typedef TYPE_1__ transport_smart ;
struct TYPE_8__ {size_t offset; scalar_t__ len; scalar_t__ data; scalar_t__ cb_data; } ;
typedef TYPE_2__ gitno_buffer ;
struct TYPE_9__ {int (* read ) (TYPE_3__*,scalar_t__,scalar_t__,size_t*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,scalar_t__,size_t*) ;
 int FUNC_3 (size_t,int ) ;

__attribute__((used)) static int FUNC_4(gitno_buffer *VAR_1)
{
 transport_smart *VAR_2 = (transport_smart *) VAR_1->cb_data;
 size_t VAR_3, VAR_4;
 int VAR_5;

 FUNC_0(VAR_2->current_stream);

 VAR_3 = VAR_1->offset;

 if ((VAR_5 = VAR_2->current_stream->read(VAR_2->current_stream, VAR_1->data + VAR_1->offset, VAR_1->len - VAR_1->offset, &VAR_4)) < 0)
  return VAR_5;

 VAR_1->offset += VAR_4;

 if (VAR_2->packetsize_cb && !VAR_2->cancelled.val) {
  VAR_5 = VAR_2->packetsize_cb(VAR_4, VAR_2->packetsize_payload);
  if (VAR_5) {
   FUNC_1(&VAR_2->cancelled, 1);
   return VAR_0;
  }
 }

 return (int)(VAR_1->offset - VAR_3);
}
