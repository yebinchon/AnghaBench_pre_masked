__attribute__((used)) static const char *
FUNC_0(int VAR_0)
{
 static char VAR_1[128];
 char VAR_2[32];
 int VAR_3;

 VAR_1[0] = '\0';
 VAR_3 = 1;
 if (FUNC_0(VAR_0)) {
  VAR_3 = 0;
  strlcat(VAR_1, "CONT", sizeof(VAR_1));
 }
 if (FUNC_0(VAR_0)) {
  if (VAR_3)
   VAR_3 = 0;
  else
   FUNC_0(VAR_1, ",", sizeof(VAR_1));
  snprintf(VAR_2, sizeof(VAR_2), "EXIT(%d)", FUNC_0(VAR_0));
  FUNC_0(VAR_1, VAR_2, sizeof(VAR_1));
 }
 if (FUNC_0(VAR_0)) {
  if (VAR_3)
   VAR_3 = 0;
  else
   FUNC_0(VAR_1, ",", sizeof(VAR_1));
  FUNC_0(VAR_2, sizeof(VAR_2), "SIG(%d)", FUNC_0(FUNC_0(VAR_0)));
  FUNC_0(VAR_1, VAR_2, sizeof(VAR_1));
  if (FUNC_0(VAR_0))
   FUNC_0(VAR_1, ",CORE", sizeof(VAR_1));
 }
 if (FUNC_0(VAR_0)) {
  if (VAR_3)
   VAR_3 = 0;
  else
   FUNC_0(VAR_1, ",", sizeof(VAR_1));
  FUNC_0(VAR_2, sizeof(VAR_2), "SIG(%d)", FUNC_0(FUNC_0(VAR_0)));
  FUNC_0(VAR_1, VAR_2, sizeof(VAR_1));
 }
 return (VAR_1);
}
