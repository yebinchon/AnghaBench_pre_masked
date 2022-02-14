
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_key {int key_len; int key; } ;
struct opal_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct opal_dev*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct opal_dev *VAR_2, void *VAR_3)
{
 const struct opal_key *VAR_4 = VAR_3;

 return FUNC_0(VAR_2, VAR_1,
       VAR_0,
       VAR_4->key,
       VAR_4->key_len);
}
