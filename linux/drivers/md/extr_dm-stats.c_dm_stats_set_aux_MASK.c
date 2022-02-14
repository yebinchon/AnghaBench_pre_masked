
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_stats {int mutex; } ;
struct dm_stat {char const* aux_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dm_stat* FUNC_0 (struct dm_stats*,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dm_stats *VAR_3, int VAR_4, const char *VAR_5)
{
 struct dm_stat *VAR_6;
 const char *VAR_7;

 FUNC_3(&VAR_3->mutex);

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_6) {
  FUNC_4(&VAR_3->mutex);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_5, VAR_2);
 if (!VAR_7) {
  FUNC_4(&VAR_3->mutex);
  return -VAR_1;
 }

 FUNC_1(VAR_6->aux_data);
 VAR_6->aux_data = VAR_7;

 FUNC_4(&VAR_3->mutex);

 return 0;
}
