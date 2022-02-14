
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aead_request {scalar_t__ assoclen; int src; } ;


 int FUNC_0 (struct aead_request*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct aead_request*,int ) ;
 scalar_t__ FUNC_2 (struct aead_request*,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_1, u32 VAR_2)
{
 if (VAR_1->assoclen)
  return FUNC_2(VAR_1, VAR_0,
           VAR_1->src, VAR_1->assoclen, VAR_2) ?:
         FUNC_0(VAR_1, VAR_2);

 return FUNC_1(VAR_1, VAR_2);
}
