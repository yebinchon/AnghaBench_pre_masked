
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (char const*,char const*,void*) ;
 scalar_t__ FUNC_3 (char const*,char const*,void*) ;
 scalar_t__ FUNC_4 (char const*,char const*,void*) ;
 int FUNC_5 (char const*,char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,char const**) ;
 int FUNC_8 (char const*,char*) ;
 void* VAR_8 ;

__attribute__((used)) static int FUNC_9(const char *VAR_9, const char *VAR_10, void *VAR_11)
{
 const char *VAR_12;

 if (!FUNC_8(VAR_9, "format.pretty"))
  return FUNC_1(&VAR_7, VAR_9, VAR_10);
 if (!FUNC_8(VAR_9, "format.subjectprefix"))
  return FUNC_1(&VAR_6, VAR_9, VAR_10);
 if (!FUNC_8(VAR_9, "log.abbrevcommit")) {
  VAR_1 = FUNC_0(VAR_9, VAR_10);
  return 0;
 }
 if (!FUNC_8(VAR_9, "log.date"))
  return FUNC_1(&VAR_2, VAR_9, VAR_10);
 if (!FUNC_8(VAR_9, "log.decorate")) {
  VAR_0 = FUNC_6(VAR_10);
  if (VAR_0 < 0)
   VAR_0 = 0;
  return 0;
 }
 if (!FUNC_8(VAR_9, "log.showroot")) {
  VAR_4 = FUNC_0(VAR_9, VAR_10);
  return 0;
 }
 if (!FUNC_8(VAR_9, "log.follow")) {
  VAR_3 = FUNC_0(VAR_9, VAR_10);
  return 0;
 }
 if (FUNC_7(VAR_9, "color.decorate.", &VAR_12))
  return FUNC_5(VAR_9, VAR_12, VAR_10);
 if (!FUNC_8(VAR_9, "log.mailmap")) {
  VAR_8 = FUNC_0(VAR_9, VAR_10);
  return 0;
 }
 if (!FUNC_8(VAR_9, "log.showsignature")) {
  VAR_5 = FUNC_0(VAR_9, VAR_10);
  return 0;
 }

 if (FUNC_4(VAR_9, VAR_10, VAR_11) < 0)
  return -1;
 if (FUNC_3(VAR_9, VAR_10, VAR_11) < 0)
  return -1;
 return FUNC_2(VAR_9, VAR_10, VAR_11);
}
