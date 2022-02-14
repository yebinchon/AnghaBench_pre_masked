__attribute__((used)) static void FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0 >= VAR_1 && VAR_0 <= VAR_2)
  return;
 if (VAR_1 == VAR_2)
  FUNC_0(FUNC_0("wrong number of arguments, should be %d"), VAR_1);
 else
  FUNC_0(FUNC_0("wrong number of arguments, should be from %d to %d"),
        VAR_1, VAR_2);
 FUNC_0();
}
