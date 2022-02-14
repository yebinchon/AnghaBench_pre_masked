
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_key {int key_len; int key; } ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct opal_dev*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,struct opal_dev*) ;
 int FUNC_2 (int *,int ,int) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_5, void *VAR_6)
{
 u8 VAR_7[VAR_2];
 struct opal_key *VAR_8 = VAR_6;

 FUNC_2(VAR_7, VAR_3[VAR_1], VAR_2);

 if (FUNC_1(VAR_8->key, VAR_8->key_len, VAR_7, VAR_5)) {
  FUNC_3("Error building Set SID cpin\n");
  return -VAR_0;
 }
 return FUNC_0(VAR_5, VAR_4);
}
