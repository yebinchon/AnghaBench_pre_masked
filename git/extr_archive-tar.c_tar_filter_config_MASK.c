
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archiver {int flags; int data; int write_archive; int name; } ;


 int FUNC_0 (struct archiver**,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 struct archiver* FUNC_2 (char const*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (char const*,char*,char const**,int*,char const**) ;
 int FUNC_6 (char const*,char*) ;
 struct archiver** VAR_4 ;
 int VAR_5 ;
 struct archiver* FUNC_7 (int,int) ;
 int FUNC_8 (char const*,int) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(const char *VAR_6, const char *VAR_7, void *VAR_8)
{
 struct archiver *VAR_9;
 const char *VAR_10;
 const char *VAR_11;
 int VAR_12;

 if (FUNC_5(VAR_6, "tar", &VAR_10, &VAR_12, &VAR_11) < 0 || !VAR_10)
  return 0;

 VAR_9 = FUNC_2(VAR_10, VAR_12);
 if (!VAR_9) {
  VAR_9 = FUNC_7(1, sizeof(*VAR_9));
  VAR_9->name = FUNC_8(VAR_10, VAR_12);
  VAR_9->write_archive = VAR_5;
  VAR_9->flags = VAR_1;
  FUNC_0(VAR_4, VAR_3 + 1, VAR_2);
  VAR_4[VAR_3++] = VAR_9;
 }

 if (!FUNC_6(VAR_11, "command")) {
  if (!VAR_7)
   return FUNC_1(VAR_6);
  FUNC_3(VAR_9->data);
  VAR_9->data = FUNC_9(VAR_7);
  return 0;
 }
 if (!FUNC_6(VAR_11, "remote")) {
  if (FUNC_4(VAR_6, VAR_7))
   VAR_9->flags |= VAR_0;
  else
   VAR_9->flags &= ~VAR_0;
  return 0;
 }

 return 0;
}
