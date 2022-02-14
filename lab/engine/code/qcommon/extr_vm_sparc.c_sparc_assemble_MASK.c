
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_opcode {unsigned int opcode; float* name; int* args; } ;
typedef enum sparc_iname { ____Placeholder_sparc_iname } sparc_iname ;





 int VAR_0 ;





 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 unsigned int FUNC_5 (int) ;
 unsigned int FUNC_6 (int) ;
 unsigned int FUNC_7 (int) ;
 struct sparc_opcode* VAR_1 ;
 int FUNC_8 (int,int,int ,int,int) ;

__attribute__((used)) static unsigned int FUNC_9(enum sparc_iname VAR_2, const int VAR_3, const int *VAR_4)
{
 const struct sparc_opcode *VAR_5 = &VAR_1[VAR_2];
 unsigned int VAR_6 = VAR_5->opcode;
 int VAR_7, VAR_8, VAR_9;

 VAR_8 = (VAR_5->name[0] == 'f');
 VAR_9 = VAR_8 || (VAR_5->name[2] == 'f');

 for (VAR_7 = 0; VAR_5->args[VAR_7] != VAR_0; VAR_7++) {
  int VAR_10 = VAR_4[VAR_7];

  switch (VAR_5->args[VAR_7]) {
  case 131: VAR_6 |= FUNC_4(VAR_10); break;
  case 130: VAR_6 |= FUNC_5(VAR_10); break;
  case 132: VAR_6 |= FUNC_3(VAR_10); break;
  case 129: VAR_6 |= FUNC_6(VAR_10); FUNC_8(VAR_10,13,0,1,VAR_7); break;
  case 134: VAR_6 |= FUNC_1(VAR_10); FUNC_8(VAR_10,30,0,1,VAR_7); break;
  case 133: VAR_6 |= FUNC_2(VAR_10); FUNC_8(VAR_10,22,0,0,VAR_7); break;
  case 135: VAR_6 |= FUNC_0(VAR_10); FUNC_8(VAR_10,22,0,1,VAR_7); break;
  case 128: VAR_6 |= FUNC_7(VAR_10); FUNC_8(VAR_10,7,0,0,VAR_7); break;
  }
 }

 return VAR_6;
}
