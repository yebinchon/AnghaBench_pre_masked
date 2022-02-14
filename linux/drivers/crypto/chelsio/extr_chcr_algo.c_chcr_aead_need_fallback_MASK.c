
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aead_request {unsigned int cryptlen; int assoclen; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct aead_request*) ;

__attribute__((used)) static int FUNC_2(struct aead_request *VAR_2, int VAR_3,
       int VAR_4, int VAR_5,
       unsigned short VAR_6)
{
 unsigned int VAR_7 = FUNC_0(FUNC_1(VAR_2));

 if (((VAR_2->cryptlen - (VAR_6 ? VAR_7 : 0)) == 0) ||
     VAR_3 > VAR_0 ||
     (VAR_2->assoclen > VAR_4) ||
     (VAR_5 > VAR_1))
  return 1;
 return 0;
}
