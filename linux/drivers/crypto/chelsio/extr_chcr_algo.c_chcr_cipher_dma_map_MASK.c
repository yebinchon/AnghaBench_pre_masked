
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ablkcipher_request {scalar_t__ src; scalar_t__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct device *VAR_4,
   struct ablkcipher_request *VAR_5)
{
 int VAR_6;

 if (VAR_5->src == VAR_5->dst) {
  VAR_6 = FUNC_0(VAR_4, VAR_5->src, FUNC_2(VAR_5->src),
       VAR_0);
  if (!VAR_6)
   goto err;
 } else {
  VAR_6 = FUNC_0(VAR_4, VAR_5->src, FUNC_2(VAR_5->src),
       VAR_2);
  if (!VAR_6)
   goto err;
  VAR_6 = FUNC_0(VAR_4, VAR_5->dst, FUNC_2(VAR_5->dst),
       VAR_1);
  if (!VAR_6) {
   FUNC_1(VAR_4, VAR_5->src, FUNC_2(VAR_5->src),
       VAR_2);
   goto err;
  }
 }

 return 0;
err:
 return -VAR_3;
}
