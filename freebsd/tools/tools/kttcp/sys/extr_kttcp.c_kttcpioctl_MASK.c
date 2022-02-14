
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct kttcp_io_args {int dummy; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct thread*,struct kttcp_io_args*) ;
 int FUNC_1 (struct thread*,struct kttcp_io_args*) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_3, u_long VAR_4, caddr_t VAR_5, int VAR_6, struct thread *VAR_7)
{
 int VAR_8;

 if ((VAR_6 & VAR_2) == 0)
  return VAR_1;

 switch (VAR_4) {
 case 128:
  VAR_8 = FUNC_1(VAR_7, (struct kttcp_io_args *) VAR_5);
  break;

 case 129:
  VAR_8 = FUNC_0(VAR_7, (struct kttcp_io_args *) VAR_5);
  break;

 default:
  return VAR_0;
 }

 return VAR_8;
}
