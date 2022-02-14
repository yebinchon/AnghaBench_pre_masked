
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floppy_state {int ejected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct floppy_state*,int ,int) ;
 int FUNC_1 (struct floppy_state*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct floppy_state*,int ) ;
 scalar_t__ FUNC_5 (struct floppy_state*,int ) ;
 int FUNC_6 (struct floppy_state*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct floppy_state *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_5, 1);
 if (VAR_7)
  return VAR_7;
 FUNC_4(VAR_6, VAR_2);
 for (VAR_8 = 20; VAR_8 > 0; --VAR_8) {
  if (FUNC_3(VAR_4)) {
   VAR_7 = -VAR_1;
   break;
  }
  FUNC_6(VAR_6, VAR_3);
  FUNC_2(1);
  if (FUNC_5(VAR_6, VAR_0) == 0)
   break;
 }
 FUNC_6(VAR_6, VAR_3);
 FUNC_7(150);
 VAR_6->ejected = 1;
 FUNC_1(VAR_6);
 return VAR_7;
}
