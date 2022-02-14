
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHA256_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (unsigned char const*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1, size_t VAR_2, const unsigned char *VAR_3)
{
 SHA256_CTX VAR_4;
 unsigned char VAR_5[VAR_0];

 FUNC_1(&VAR_4);
 FUNC_2(&VAR_4, VAR_1, VAR_2);
 FUNC_0(VAR_5, &VAR_4);

 return (FUNC_3(VAR_3, VAR_5, VAR_0));
}
