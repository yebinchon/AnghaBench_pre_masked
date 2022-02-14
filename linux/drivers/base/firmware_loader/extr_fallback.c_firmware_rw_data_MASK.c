
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_priv {char* data; } ;
typedef int loff_t ;


 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_1(struct fw_priv *VAR_0, char *VAR_1,
      loff_t VAR_2, size_t VAR_3, bool VAR_4)
{
 if (VAR_4)
  FUNC_0(VAR_1, VAR_0->data + VAR_2, VAR_3);
 else
  FUNC_0(VAR_0->data + VAR_2, VAR_1, VAR_3);
}
