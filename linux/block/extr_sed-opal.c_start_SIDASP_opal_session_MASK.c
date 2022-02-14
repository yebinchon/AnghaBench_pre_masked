
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_key {int key_len; int const* key; } ;
struct opal_dev {int * prev_data; int prev_d_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct opal_dev*,int ,int ,int const*,int ) ;

__attribute__((used)) static int FUNC_2(struct opal_dev *VAR_2, void *VAR_3)
{
 int VAR_4;
 const u8 *VAR_5 = VAR_2->prev_data;

 if (!VAR_5) {
  const struct opal_key *VAR_6 = VAR_3;

  VAR_4 = FUNC_1(VAR_2, VAR_1,
       VAR_0,
       VAR_6->key,
       VAR_6->key_len);
 } else {
  VAR_4 = FUNC_1(VAR_2, VAR_1,
       VAR_0,
       VAR_5, VAR_2->prev_d_len);
  FUNC_0(VAR_5);
  VAR_2->prev_data = ((void*)0);
 }

 return VAR_4;
}
