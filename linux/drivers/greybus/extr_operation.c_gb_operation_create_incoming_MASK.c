
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct gb_operation_msg_hdr {int dummy; } ;
struct gb_operation {TYPE_1__* request; scalar_t__ id; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int header; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gb_operation* FUNC_0 (struct gb_connection*,int ,size_t,int ,unsigned long,int ) ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (struct gb_operation*) ;

__attribute__((used)) static struct gb_operation *
FUNC_3(struct gb_connection *VAR_4, u16 VAR_5,
        u8 VAR_6, void *VAR_7, size_t VAR_8)
{
 struct gb_operation *VAR_9;
 size_t VAR_10;
 unsigned long VAR_11 = VAR_0;


 VAR_10 = VAR_8 - sizeof(struct gb_operation_msg_hdr);

 if (!VAR_5)
  VAR_11 |= VAR_1;

 VAR_9 = FUNC_0(VAR_4, VAR_6,
            VAR_10,
            VAR_2,
            VAR_11, VAR_3);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->id = VAR_5;
 FUNC_1(VAR_9->request->header, VAR_7, VAR_8);
 FUNC_2(VAR_9);

 return VAR_9;
}
