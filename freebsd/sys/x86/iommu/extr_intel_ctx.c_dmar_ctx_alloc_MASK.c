
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dmar_domain {int dummy; } ;
struct dmar_ctx {int refs; int rid; struct dmar_domain* domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dmar_ctx* FUNC_0 (int,int ,int) ;

__attribute__((used)) static struct dmar_ctx *
FUNC_1(struct dmar_domain *VAR_3, uint16_t VAR_4)
{
 struct dmar_ctx *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);
 VAR_5->domain = VAR_3;
 VAR_5->rid = VAR_4;
 VAR_5->refs = 1;
 return (VAR_5);
}
