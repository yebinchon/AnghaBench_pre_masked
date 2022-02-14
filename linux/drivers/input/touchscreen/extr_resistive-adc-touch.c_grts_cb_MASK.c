
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct grts_state {unsigned int pressure_min; int input; scalar_t__ pressure; int prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(const void *VAR_2, void *VAR_3)
{
 const u16 *VAR_4 = VAR_2;
 struct grts_state *VAR_5 = VAR_3;
 unsigned int VAR_6, VAR_7, VAR_8 = 0x0;


 VAR_6 = VAR_4[0];
 VAR_7 = VAR_4[1];
 if (VAR_5->pressure)
  VAR_8 = VAR_4[2];

 if ((!VAR_6 && !VAR_7) || (VAR_5->pressure && (VAR_8 < VAR_5->pressure_min))) {

  FUNC_1(VAR_5->input, VAR_1, 0);
  FUNC_2(VAR_5->input);
  return 0;
 }


 FUNC_3(VAR_5->input, &VAR_5->prop, VAR_6, VAR_7, 0);
 if (VAR_5->pressure)
  FUNC_0(VAR_5->input, VAR_0, VAR_8);
 FUNC_1(VAR_5->input, VAR_1, 1);
 FUNC_2(VAR_5->input);

 return 0;
}
