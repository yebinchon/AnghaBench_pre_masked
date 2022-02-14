
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atom_context {scalar_t__ cmd_table; scalar_t__ data_table; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct atom_context*,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int) ;

int FUNC_5(struct atom_context *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4->data_table + VAR_1);
 uint32_t VAR_6[16];
 int VAR_7;

 FUNC_4(VAR_6, 0, 64);

 VAR_6[0] = FUNC_3(FUNC_1(VAR_5 + VAR_3));
 VAR_6[1] = FUNC_3(FUNC_1(VAR_5 + VAR_2));
 if (!VAR_6[0] || !VAR_6[1])
  return 1;

 if (!FUNC_0(VAR_4->cmd_table + 4 + 2 * VAR_0))
  return 1;
 VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_6, 0, 64);

 return VAR_7;
}
