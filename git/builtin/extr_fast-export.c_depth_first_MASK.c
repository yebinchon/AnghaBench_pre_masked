
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct diff_filepair {char status; TYPE_2__* two; TYPE_1__* one; } ;
struct TYPE_4__ {char* path; } ;
struct TYPE_3__ {char* path; } ;


 int FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct diff_filepair *VAR_2 = *((const struct diff_filepair **)VAR_0);
 const struct diff_filepair *VAR_3 = *((const struct diff_filepair **)VAR_1);
 const char *VAR_4, *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_4 = VAR_2->one ? VAR_2->one->path : VAR_2->two->path;
 VAR_5 = VAR_3->one ? VAR_3->one->path : VAR_3->two->path;

 VAR_6 = FUNC_1(VAR_4);
 VAR_7 = FUNC_1(VAR_5);
 VAR_8 = (VAR_6 < VAR_7) ? VAR_6 : VAR_7;


 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_8);
 if (VAR_9)
  return VAR_9;
 VAR_9 = VAR_7 - VAR_6;
 if (VAR_9)
  return VAR_9;





 return (VAR_2->status == 'R') - (VAR_3->status == 'R');
}
