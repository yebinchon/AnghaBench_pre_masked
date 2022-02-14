
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

void FUNC_1(void)
{
 FUNC_0(((void*)0), "One-liner with no trailing newline");
 FUNC_0(((void*)0), "One-liner with trailing newline\n");
 FUNC_0(((void*)0), "\n\nTrimmed leading&trailing newlines\n\n");
 FUNC_0("(There are more!)", "\nFirst paragraph only\n\n(There are more!)");
 FUNC_0("(Yes, unwrapped!)", "\nFirst paragraph\nwith  unwrapped\ntrailing\tlines\n\n(Yes, unwrapped!)");
 FUNC_0("are preserved", "\tLeading\n\ttabs\n\nare preserved");
 FUNC_0("are preserved", " Leading\n Spaces\n\nare preserved");
 FUNC_0(((void*)0), "Trailing tabs\tare removed\t\t");
 FUNC_0(((void*)0), "Trailing spaces  are removed  ");
 FUNC_0("are removed", "Trailing tabs\t\n\nare removed");
 FUNC_0("are removed", "Trailing spaces \n\nare removed");
 FUNC_0(((void*)0),"Newlines\nare\nreplaced by spaces\n");
 FUNC_0(((void*)0) , "\n  Spaces after newlines\n  are\n  collapsed\n  ");
 FUNC_0(((void*)0) , "  \nSpaces before newlines  \nare  \ncollapsed  \n");
 FUNC_0(((void*)0) , "  \n  Spaces around newlines  \n  are  \n  collapsed  \n  ");
 FUNC_0("collapsed" , "  \n  Trailing newlines  \n  are  \n\n  collapsed  \n  ");
 FUNC_0(((void*)0), "  \n  Trailing spaces \n  are stripped \n\n  \n \t ");
 FUNC_0(((void*)0) , "");
 FUNC_0(((void*)0) , " ");
 FUNC_0(((void*)0) , "\n");
 FUNC_0(((void*)0) , "\n \n");
}
