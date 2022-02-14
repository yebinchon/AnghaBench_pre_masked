
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct min_abbrev_data {unsigned int init_len; scalar_t__* hex; unsigned int cur_len; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct object_id const*,unsigned int) ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_1, void *VAR_2)
{
 struct min_abbrev_data *VAR_3 = VAR_2;

 unsigned int VAR_4 = VAR_3->init_len;
 while (VAR_3->hex[VAR_4] && VAR_3->hex[VAR_4] == FUNC_0(VAR_1, VAR_4))
  VAR_4++;

 if (VAR_4 < VAR_0 && VAR_4 >= VAR_3->cur_len)
  VAR_3->cur_len = VAR_4 + 1;

 return 0;
}
