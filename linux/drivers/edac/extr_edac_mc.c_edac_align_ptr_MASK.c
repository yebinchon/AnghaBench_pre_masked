void *FUNC_0(void **VAR_0, unsigned int VAR_1, int VAR_2)
{
 unsigned int VAR_3, VAR_4;
 void *VAR_5 = *VAR_0;

 *VAR_0 += VAR_1 * VAR_2;
 if (VAR_1 > sizeof(long))
  VAR_3 = sizeof(long long);
 else if (VAR_1 > sizeof(int))
  VAR_3 = sizeof(long);
 else if (VAR_1 > sizeof(short))
  VAR_3 = sizeof(int);
 else if (VAR_1 > sizeof(char))
  VAR_3 = sizeof(short);
 else
  return (char *)VAR_5;

 VAR_4 = (unsigned long)VAR_0 % VAR_3;

 if (VAR_4 == 0)
  return (char *)VAR_5;

 *VAR_0 += VAR_3 - VAR_4;

 return (void *)(((unsigned long)VAR_5) + VAR_3 - VAR_4);
}
