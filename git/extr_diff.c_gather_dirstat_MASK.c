
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirstat_file {char* name; unsigned long changed; } ;
struct dirstat_dir {int permille; int cumulative; scalar_t__ nr; struct dirstat_file* files; } ;
struct diff_options {int file; } ;


 char* FUNC_0 (struct diff_options*) ;
 int FUNC_1 (int ,char*,char const*,int,int,int,char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static long FUNC_5(struct diff_options *VAR_0, struct dirstat_dir *VAR_1,
  unsigned long VAR_2, const char *VAR_3, int VAR_4)
{
 unsigned long VAR_5 = 0;
 unsigned int VAR_6 = 0;
 const char *VAR_7 = FUNC_0(VAR_0);

 while (VAR_1->nr) {
  struct dirstat_file *VAR_8 = VAR_1->files;
  int VAR_9 = FUNC_4(VAR_8->name);
  unsigned long VAR_10;
  char *VAR_11;

  if (VAR_9 < VAR_4)
   break;
  if (FUNC_2(VAR_8->name, VAR_3, VAR_4))
   break;
  VAR_11 = FUNC_3(VAR_8->name + VAR_4, '/');
  if (VAR_11) {
   int VAR_12 = VAR_11 + 1 - VAR_8->name;
   VAR_10 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_8->name, VAR_12);
   VAR_6++;
  } else {
   VAR_10 = VAR_8->changed;
   VAR_1->files++;
   VAR_1->nr--;
   VAR_6 += 2;
  }
  VAR_5 += VAR_10;
 }







 if (VAR_4 && VAR_6 != 1) {
  if (VAR_5) {
   int VAR_13 = VAR_5 * 1000 / VAR_2;
   if (VAR_13 >= VAR_1->permille) {
    FUNC_1(VAR_0->file, "%s%4d.%01d%% %.*s\n", VAR_7,
     VAR_13 / 10, VAR_13 % 10, VAR_4, VAR_3);
    if (!VAR_1->cumulative)
     return 0;
   }
  }
 }
 return VAR_5;
}
