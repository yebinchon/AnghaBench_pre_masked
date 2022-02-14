
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char* ntlm_des_block ;
typedef int keystr2 ;
typedef int keystr1 ;


 int FUNC_0 (int,size_t) ;
 unsigned char* VAR_0 ;
 int FUNC_1 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char**,int ,int) ;
 scalar_t__ FUNC_3 (unsigned char**,unsigned char**,unsigned char**) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const) ;

__attribute__((used)) static inline bool FUNC_6(
 ntlm_des_block VAR_1[2],
 const char *VAR_2)
{

 ntlm_des_block VAR_3 = VAR_0;
 ntlm_des_block VAR_4, VAR_5;
 size_t VAR_6, VAR_7;
 ntlm_des_block VAR_8, VAR_9;
 size_t VAR_10, VAR_11;


 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 VAR_10 = VAR_2 ? FUNC_4(VAR_2) : 0;


 VAR_6 = FUNC_0(7, VAR_10);
 VAR_7 = (VAR_10 > 7) ? FUNC_0(14, VAR_10) - 7 : 0;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  VAR_4[VAR_11] = (unsigned char)FUNC_5(VAR_2[VAR_11]);
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  VAR_5[VAR_11] = (unsigned char)FUNC_5(VAR_2[VAR_11+7]);


 FUNC_1(&VAR_8, VAR_4, VAR_6);
 FUNC_1(&VAR_9, VAR_5, VAR_7);

 return FUNC_3(&VAR_1[0], &VAR_3, &VAR_8) &&
  FUNC_3(&VAR_1[1], &VAR_3, &VAR_9);
}
