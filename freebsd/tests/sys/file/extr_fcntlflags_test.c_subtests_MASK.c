
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,...) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char*,int ,...) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_5, int VAR_6, const char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (VAR_8 == -1)
  FUNC_3("not ok %d - open(\"%s\", %s) failed\n",
      VAR_4++, VAR_5, VAR_7);
 else
  FUNC_3("ok %d - open(\"%s\", %s) succeeded\n",
      VAR_4++, VAR_5, VAR_7);
 VAR_9 = FUNC_1(VAR_8, VAR_1);
 if (VAR_9 == -1)
  FUNC_3("not ok %d - fcntl(F_GETFL) failed\n", VAR_4++);
 else if ((VAR_9 & VAR_0) == VAR_6)
  FUNC_3("ok %d - fcntl(F_GETFL) gave correct result\n",
      VAR_4++);
 else
  FUNC_3("not ok %d - fcntl(F_GETFL) gave incorrect result "
      "(%#x & %#x != %#x)\n",
      VAR_4++, VAR_9, VAR_0, VAR_6);
 if (FUNC_1(VAR_8, VAR_2, VAR_9) == -1)
  FUNC_3("not ok %d - fcntl(F_SETFL) same flags failed\n",
      VAR_4++);
 else
  FUNC_3("ok %d - fcntl(F_SETFL) same flags succeeded\n",
      VAR_4++);
 VAR_10 = FUNC_1(VAR_8, VAR_1);
 if (VAR_10 == -1)
  FUNC_3("not ok %d - fcntl(F_GETFL) failed\n", VAR_4++);
 else if (VAR_10 == VAR_9)
  FUNC_3("ok %d - fcntl(F_GETFL) gave same result\n",
      VAR_4++);
 else
  FUNC_3("not ok %d - fcntl(F_SETFL) caused fcntl(F_GETFL) to "
      "change from %#x to %#x\n",
      VAR_4++, VAR_9, VAR_10);
 if (FUNC_1(VAR_8, VAR_2, VAR_10 | VAR_3) == -1)
  FUNC_3("not ok %d - fcntl(F_SETFL) O_NONBLOCK failed\n",
      VAR_4++);
 else
  FUNC_3("ok %d - fcntl(F_SETFL) O_NONBLOCK succeeded\n",
      VAR_4++);
 VAR_11 = FUNC_1(VAR_8, VAR_1);
 if (VAR_11 == -1)
  FUNC_3("not ok %d - fcntl(F_GETFL) failed\n", VAR_4++);
 else if (VAR_11 == (VAR_10 | VAR_3))
  FUNC_3("ok %d - fcntl(F_GETFL) gave expected result\n",
      VAR_4++);
 else
  FUNC_3("not ok %d - fcntl(F_SETFL) gave unexpected result "
      "(%#x != %#x)\n",
      VAR_4++, VAR_11, VAR_10 | VAR_3);
 (void)FUNC_0(VAR_8);
}
