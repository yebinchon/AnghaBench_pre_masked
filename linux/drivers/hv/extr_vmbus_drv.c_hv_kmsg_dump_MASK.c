
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmsg_dumper {int dummy; } ;
typedef int phys_addr_t ;
typedef enum kmsg_dump_reason { ____Placeholder_kmsg_dump_reason } kmsg_dump_reason ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct kmsg_dumper*,int,int ,int ,size_t*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kmsg_dumper *VAR_4,
    enum kmsg_dump_reason VAR_5)
{
 size_t VAR_6;
 phys_addr_t VAR_7;


 if ((VAR_5 != VAR_0) || (!VAR_3))
  return;

 VAR_7 = FUNC_2(VAR_2);





 FUNC_1(VAR_4, 1, VAR_2, VAR_1,
        &VAR_6);
 if (VAR_6)
  FUNC_0(VAR_7, VAR_6);
}
