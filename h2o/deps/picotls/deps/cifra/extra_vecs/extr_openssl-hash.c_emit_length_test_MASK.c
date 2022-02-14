
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *,size_t*,unsigned int*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,size_t*,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (size_t*,size_t) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1, const EVP_MD *VAR_2, size_t VAR_3)
{
  EVP_MD_CTX VAR_4, VAR_5;
  FUNC_1(&VAR_4, VAR_2);
  uint8_t VAR_6[VAR_0];
  unsigned int VAR_7;

  for (size_t VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  {
    FUNC_1(&VAR_5, VAR_2);
    for (size_t VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    {
      uint8_t VAR_10 = VAR_8 & 0xff;
      FUNC_2(&VAR_5, &VAR_10, 1);
    }
    VAR_7 = sizeof VAR_6;
    FUNC_0(&VAR_5, VAR_6, &VAR_7);

    FUNC_2(&VAR_4, VAR_6, VAR_7);
  }

  VAR_7 = sizeof VAR_6;
  FUNC_0(&VAR_4, VAR_6, &VAR_7);

  FUNC_3("%s(%zu) = ", VAR_1, VAR_3);
  FUNC_4(VAR_6, (size_t) VAR_7);
  FUNC_3("\n");
}
