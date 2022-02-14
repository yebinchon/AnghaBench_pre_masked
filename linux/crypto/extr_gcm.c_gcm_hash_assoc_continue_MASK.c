
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aead_request {int assoclen; } ;


 int FUNC_0 (struct aead_request*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct aead_request*,unsigned int,int ,int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_2(VAR_1->assoclen);
 if (VAR_3)
  return FUNC_1(VAR_1, VAR_3,
           VAR_0, VAR_2) ?:
         FUNC_0(VAR_1, VAR_2);

 return FUNC_0(VAR_1, VAR_2);
}
