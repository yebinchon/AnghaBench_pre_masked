
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct smb_dev {int dummy; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smb_dev*,int ) ;
 int FUNC_1 (struct smb_dev*,int ) ;
 int VAR_1 ;
 struct smb_dev* FUNC_2 (struct cdev*) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct smb_dev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2);
 VAR_7 = FUNC_0(VAR_6, VAR_1);
 if (VAR_7) {
  FUNC_1(VAR_6, VAR_0);
  return (VAR_7);
 }
 return (0);
}
