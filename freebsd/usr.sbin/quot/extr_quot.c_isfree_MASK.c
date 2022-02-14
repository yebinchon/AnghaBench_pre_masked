
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
struct fs {int dummy; } ;


 int FUNC_0 (struct fs*,union dinode*,int ) ;





 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct fs *VAR_2, union dinode *VAR_3)
{




 switch (FUNC_0(VAR_2, VAR_3, VAR_1) & VAR_0) {
 case 132:
 case 131:
 case 133:
 case 130:
  return 0;
 case 134:
 case 135:
 case 129:
 case 128:
 case 0:
  return 1;
 default:
  FUNC_1(1, "unknown IFMT 0%o", FUNC_0(VAR_2, VAR_3, VAR_1) & VAR_0);
 }

}
