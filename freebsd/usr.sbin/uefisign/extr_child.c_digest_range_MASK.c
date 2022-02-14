
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct executable {scalar_t__ x_buf; } ;
typedef scalar_t__ off_t ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,size_t) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct executable*,scalar_t__,size_t,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct executable *VAR_1, EVP_MD_CTX *VAR_2, off_t VAR_3, size_t VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_1, VAR_3, VAR_4, "chunk");

 VAR_5 = FUNC_1(VAR_2, VAR_1->x_buf + VAR_3, VAR_4);
 if (VAR_5 == 0) {
  FUNC_0(VAR_0);
  FUNC_2(1, "EVP_DigestUpdate(3) failed");
 }
}
