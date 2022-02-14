__attribute__((used)) static void FUNC_0(const char *VAR_0, int VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 if (VAR_1 < 0)
  VAR_1 = strlen(VAR_0);
 VAR_3 = (VAR_1 && VAR_0[VAR_1-1] == '\r');

 printf("%.*s%s%s\n", VAR_1 - VAR_3, VAR_0,
        VAR_2,
        VAR_3 ? "\r" : "");
}
