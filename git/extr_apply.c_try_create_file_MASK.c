
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {unsigned long len; char* buf; } ;
struct stat {int st_mode; } ;
struct apply_state {TYPE_1__* repo; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,char const*,char const*,unsigned long,struct strbuf*) ;
 int FUNC_6 (int ,char const*) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char const*,struct stat*) ;
 int FUNC_8 (char const*,int) ;
 int FUNC_9 (char const*,int,int) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (char const*,char const*) ;
 scalar_t__ FUNC_12 (int,char const*,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct apply_state *VAR_5, const char *VAR_6,
      unsigned int VAR_7, const char *VAR_8,
      unsigned long VAR_9)
{
 int VAR_10, VAR_11;
 struct strbuf VAR_12 = VAR_3;

 if (FUNC_1(VAR_7)) {
  struct stat VAR_13;
  if (!FUNC_7(VAR_6, &VAR_13) && FUNC_0(VAR_13.st_mode))
   return 0;
  return !!FUNC_8(VAR_6, 0777);
 }

 if (VAR_4 && FUNC_2(VAR_7))



  return !!FUNC_11(VAR_8, VAR_6);

 VAR_10 = FUNC_9(VAR_6, VAR_0 | VAR_1 | VAR_2, (VAR_7 & 0100) ? 0777 : 0666);
 if (VAR_10 < 0)
  return 1;

 if (FUNC_5(VAR_5->repo->index, VAR_6, VAR_8, VAR_9, &VAR_12)) {
  VAR_9 = VAR_12.len;
  VAR_8 = VAR_12.buf;
 }

 VAR_11 = FUNC_12(VAR_10, VAR_8, VAR_9) < 0;
 if (VAR_11)
  FUNC_6(FUNC_3("failed to write to '%s'"), VAR_6);
 FUNC_10(&VAR_12);

 if (FUNC_4(VAR_10) < 0 && !VAR_11)
  return FUNC_6(FUNC_3("closing file '%s'"), VAR_6);

 return VAR_11 ? -1 : 0;
}
