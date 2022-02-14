
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_file_info {int count; unsigned int status; int wildmatch_flags; char const* expected; int ambiguous; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 struct status_file_info *VAR_5 = VAR_4;
 int (*VAR_6)(const char *VAR_7, const char *VAR_8);

 VAR_5->count++;
 VAR_5->status = VAR_3;

 VAR_6 = (VAR_5->wildmatch_flags & VAR_1) ? FUNC_0 : FUNC_1;

 if (VAR_5->count > 1 ||
  (VAR_6(VAR_5->expected, VAR_2) != 0 &&
   FUNC_2(VAR_5->expected, VAR_2, VAR_5->wildmatch_flags) != 0))
 {
  VAR_5->ambiguous = 1;
  return VAR_0;
 }

 return 0;
}
