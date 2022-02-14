
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct ib_umad_packet {int list; TYPE_2__ mad; } ;
struct ib_umad_file {int mutex; int recv_wait; int recv_list; } ;
struct ib_mad_agent {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ib_mad_agent* FUNC_0 (struct ib_umad_file*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ib_umad_file *VAR_1,
   struct ib_mad_agent *VAR_2,
   struct ib_umad_packet *VAR_3)
{
 int VAR_4 = 1;

 FUNC_2(&VAR_1->mutex);

 for (VAR_3->mad.hdr.id = 0;
      VAR_3->mad.hdr.id < VAR_0;
      VAR_3->mad.hdr.id++)
  if (VAR_2 == FUNC_0(VAR_1, VAR_3->mad.hdr.id)) {
   FUNC_1(&VAR_3->list, &VAR_1->recv_list);
   FUNC_4(&VAR_1->recv_wait);
   VAR_4 = 0;
   break;
  }

 FUNC_3(&VAR_1->mutex);

 return VAR_4;
}
