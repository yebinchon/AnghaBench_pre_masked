
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfc_multi {int dummy; } ;


 int FUNC_0 (struct hfc_multi*,int) ;
 int FUNC_1 (struct hfc_multi*) ;
 int FUNC_2 (struct hfc_multi*) ;
 unsigned char FUNC_3 (struct hfc_multi*,int) ;
 int FUNC_4 (struct hfc_multi*,unsigned short) ;

__attribute__((used)) static inline unsigned char
FUNC_5(struct hfc_multi *VAR_0, int VAR_1, unsigned short VAR_2)
{
 unsigned char VAR_3;

 FUNC_4(VAR_0, VAR_2);

 if (!VAR_1)
  FUNC_0(VAR_0, 2);
 else
  FUNC_0(VAR_0, 3);

 FUNC_2(VAR_0);
 VAR_3 = FUNC_3(VAR_0, 1);
 FUNC_1(VAR_0);

 FUNC_0(VAR_0, 0);

 return VAR_3;
}
