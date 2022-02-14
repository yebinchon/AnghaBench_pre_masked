
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_device {int disk; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int ) ;

__attribute__((used)) static inline struct device *FUNC_1(struct nbd_device *VAR_0)
{
 return FUNC_0(VAR_0->disk);
}
