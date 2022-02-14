__attribute__((used)) static void
FUNC_0(char *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1 - 1; VAR_2++) {
  if (VAR_0[VAR_2] == '\0')
   VAR_0[VAR_2] = ' ';
 }

 printf("[ %.*s ]", VAR_1, VAR_0);
}
