
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_fs_t ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,char const*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(const char* VAR_3) {
  uv_fs_t VAR_4[VAR_0];
  unsigned int VAR_5;


  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++)
    FUNC_3(FUNC_2(), VAR_4 + VAR_5, VAR_3, VAR_2);

  FUNC_4(FUNC_2(), VAR_1);


  for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
    FUNC_1(VAR_4 + 0, VAR_3);
}
