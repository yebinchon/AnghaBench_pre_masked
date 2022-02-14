
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_srch_key {size_t pathlen; scalar_t__ stage; int path; } ;
struct entry_internal {size_t pathlen; int entry; int path; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,size_t) ;

int FUNC_2(const void *VAR_1, const void *VAR_2)
{
 const struct entry_srch_key *VAR_3 = VAR_1;
 const struct entry_internal *VAR_4 = VAR_2;
 int VAR_5;
 size_t VAR_6, VAR_7, VAR_8;

 VAR_6 = VAR_3->pathlen;
 VAR_7 = VAR_4->pathlen;
 VAR_8 = VAR_6 < VAR_7 ? VAR_6 : VAR_7;

 VAR_5 = FUNC_1(VAR_3->path, VAR_4->path, VAR_8);
 if (VAR_5)
  return VAR_5;
 if (VAR_6 < VAR_7)
  return -1;
 if (VAR_6 > VAR_7)
  return 1;

 if (VAR_3->stage != VAR_0)
  return VAR_3->stage - FUNC_0(&VAR_4->entry);

 return 0;
}
