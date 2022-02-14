
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int bitstr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(int VAR_10)
{
 uint16_t *VAR_11;
 bitstr_t *VAR_12;

 VAR_11 = FUNC_2(VAR_10 * sizeof(uint16_t), VAR_0,
     VAR_1 | VAR_2);
 VAR_12 = FUNC_2(FUNC_0(65536), VAR_0, VAR_1 | VAR_2);

 FUNC_3(&VAR_7);
 if (VAR_5 != ((void*)0)) {
  FUNC_1(VAR_5, VAR_0);
  FUNC_1(VAR_6, VAR_0);
 }
 VAR_5 = VAR_11;
 VAR_6 = VAR_12;
 VAR_4 = VAR_10;
 VAR_3 = 0;
 VAR_8 = 0;
 VAR_9 = 0;
 FUNC_4(&VAR_7);
}
