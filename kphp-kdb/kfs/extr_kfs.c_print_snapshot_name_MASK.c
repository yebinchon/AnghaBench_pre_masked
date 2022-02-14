int FUNC_0 (const char *VAR_0) {
  int VAR_1 = strlen (VAR_0);
  FUNC_0 (VAR_1 >= 4 && !strcmp (VAR_0 + VAR_1 - 4, ".tmp") && VAR_1 <= 256);
  return printf ("%.*s\n", VAR_1 - 4, VAR_0);
}
