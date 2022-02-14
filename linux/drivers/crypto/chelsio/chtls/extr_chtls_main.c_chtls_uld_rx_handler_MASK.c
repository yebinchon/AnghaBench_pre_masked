
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct sk_buff {int dummy; } ;
struct pkt_gl {int dummy; } ;
struct chtls_dev {int dummy; } ;
typedef int __be64 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct chtls_dev*,struct sk_buff**,int const*) ;
 scalar_t__ FUNC_1 (struct chtls_dev*,struct pkt_gl const*,int const*) ;
 int FUNC_2 (struct chtls_dev*,int const*) ;
 struct sk_buff* FUNC_3 (struct pkt_gl const*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void *VAR_3, const __be64 *VAR_4,
    const struct pkt_gl *VAR_5)
{
 struct chtls_dev *VAR_6 = VAR_3;
 unsigned int VAR_7;
 struct sk_buff *VAR_8;

 VAR_7 = *(u8 *)VAR_4;

 if (FUNC_4(VAR_7 == VAR_0)) {
  if (FUNC_1(VAR_6, VAR_5, VAR_4) < 0)
   goto nomem;
  return 0;
 }

 if (!VAR_5)
  return FUNC_2(VAR_6, VAR_4);


 VAR_8 = FUNC_3(VAR_5, 128, 128);
 if (FUNC_4(!VAR_8))
  goto nomem;
 FUNC_0(VAR_6, &VAR_8, VAR_4);
 return 0;

nomem:
 return -VAR_1;
}
