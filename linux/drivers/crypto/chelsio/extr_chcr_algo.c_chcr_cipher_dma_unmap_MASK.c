
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ablkcipher_request {scalar_t__ src; scalar_t__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct device *VAR_3,
      struct ablkcipher_request *VAR_4)
{
 if (VAR_4->src == VAR_4->dst) {
  FUNC_0(VAR_3, VAR_4->src, FUNC_1(VAR_4->src),
       VAR_0);
 } else {
  FUNC_0(VAR_3, VAR_4->src, FUNC_1(VAR_4->src),
       VAR_2);
  FUNC_0(VAR_3, VAR_4->dst, FUNC_1(VAR_4->dst),
       VAR_1);
 }
}
