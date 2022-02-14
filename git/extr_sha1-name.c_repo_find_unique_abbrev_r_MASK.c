
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* hash_algo; } ;
struct object_id {int dummy; } ;
struct min_abbrev_data {int init_len; int cur_len; char* hex; struct object_id const* oid; struct repository* repo; } ;
struct disambiguate_state {int always_call_fn; void* cb_data; int fn; } ;
struct TYPE_2__ {unsigned int hexsz; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct min_abbrev_data*) ;
 int FUNC_2 (struct disambiguate_state*) ;
 int FUNC_3 (struct disambiguate_state*,struct object_id*) ;
 scalar_t__ FUNC_4 (struct repository*,char*,int,struct disambiguate_state*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,struct object_id const*) ;
 unsigned long FUNC_7 (struct repository*) ;
 int VAR_1 ;

int FUNC_8(struct repository *VAR_2, char *VAR_3,
         const struct object_id *VAR_4, int VAR_5)
{
 struct disambiguate_state VAR_6;
 struct min_abbrev_data VAR_7;
 struct object_id VAR_8;
 const unsigned VAR_9 = VAR_2->hash_algo->hexsz;

 if (VAR_5 < 0) {
  unsigned long VAR_10 = FUNC_7(VAR_2);





  VAR_5 = FUNC_5(VAR_10) + 1;






  VAR_5 = FUNC_0(VAR_5, 2);



  if (VAR_5 < VAR_0)
   VAR_5 = VAR_0;
 }

 FUNC_6(VAR_3, VAR_4);
 if (VAR_5 == VAR_9 || !VAR_5)
  return VAR_9;

 VAR_7.repo = VAR_2;
 VAR_7.init_len = VAR_5;
 VAR_7.cur_len = VAR_5;
 VAR_7.hex = VAR_3;
 VAR_7.oid = VAR_4;

 FUNC_1(&VAR_7);

 if (FUNC_4(VAR_2, VAR_3, VAR_7.cur_len, &VAR_6) < 0)
  return -1;

 VAR_6.fn = VAR_1;
 VAR_6.always_call_fn = 1;
 VAR_6.cb_data = (void *)&VAR_7;

 FUNC_2(&VAR_6);
 (void)FUNC_3(&VAR_6, &VAR_8);

 VAR_3[VAR_7.cur_len] = 0;
 return VAR_7.cur_len;
}
