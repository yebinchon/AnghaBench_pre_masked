
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

void FUNC_1(void)
{
 FUNC_0("One-liner with no trailing newline", "One-liner with no trailing newline");
 FUNC_0("One-liner with trailing newline", "One-liner with trailing newline\n");
 FUNC_0("Trimmed leading&trailing newlines", "\n\nTrimmed leading&trailing newlines\n\n");
 FUNC_0("First paragraph only", "\nFirst paragraph only\n\n(There are more!)");
 FUNC_0("First paragraph with  unwrapped trailing\tlines", "\nFirst paragraph\nwith  unwrapped\ntrailing\tlines\n\n(Yes, unwrapped!)");
 FUNC_0("\tLeading tabs", "\tLeading\n\ttabs\n\nare preserved");
 FUNC_0(" Leading Spaces", " Leading\n Spaces\n\nare preserved");
 FUNC_0("Trailing tabs\tare removed", "Trailing tabs\tare removed\t\t");
 FUNC_0("Trailing spaces  are removed", "Trailing spaces  are removed  ");
 FUNC_0("Trailing tabs", "Trailing tabs\t\n\nare removed");
 FUNC_0("Trailing spaces", "Trailing spaces \n\nare removed");
 FUNC_0("Newlines are replaced by spaces", "Newlines\nare\nreplaced by spaces\n");
 FUNC_0("  Spaces after newlines are collapsed", "\n  Spaces after newlines\n  are\n  collapsed\n  ");
 FUNC_0(" Spaces before newlines are collapsed", "  \nSpaces before newlines  \nare  \ncollapsed  \n");
 FUNC_0(" Spaces around newlines are collapsed", "  \n  Spaces around newlines  \n  are  \n  collapsed  \n  ");
 FUNC_0(" Trailing newlines are" , "  \n  Trailing newlines  \n  are  \n\n  collapsed  \n  ");
 FUNC_0(" Trailing spaces are stripped", "  \n  Trailing spaces \n  are stripped \n\n  \n \t ");
 FUNC_0("", "");
 FUNC_0("", " ");
 FUNC_0("", "\n");
 FUNC_0("", "\n \n");
}
