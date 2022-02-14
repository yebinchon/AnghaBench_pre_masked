
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ber_element {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 struct ber_element* FUNC_0 (struct ber_element*,char*,size_t) ;
 struct ber_element* FUNC_1 (struct ber_element*) ;
 struct ber_element* FUNC_2 (struct ber_element*) ;
 int FUNC_3 (struct ber_element*) ;
 int FUNC_4 (struct ber_element*,int *) ;
 int FUNC_5 (struct ber_element*,int ,unsigned long) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,size_t) ;
 size_t FUNC_8 (char*,char*) ;
 size_t FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static struct ber_element *
FUNC_11(struct ber_element *VAR_13, char **VAR_14)
{
 struct ber_element *VAR_15, *VAR_16 = ((void*)0);
 char *VAR_17, *VAR_18, *VAR_19, *VAR_20;
 size_t VAR_21;
 unsigned long VAR_22;

 VAR_16 = ((void*)0);


 VAR_20 = *VAR_14;
 if (*VAR_20 != '(')
  goto syntaxfail;

 switch (*++VAR_20) {
 case '&':
 case '|':
  if (*VAR_20 == '&')
   VAR_22 = VAR_1;
  else
   VAR_22 = VAR_7;

  if ((VAR_15 = FUNC_2(VAR_13)) == ((void*)0))
   goto callfail;
  VAR_16 = VAR_15;
  FUNC_5(VAR_15, VAR_0, VAR_22);

  if (*++VAR_20 != '(')
   goto syntaxfail;

  while (*VAR_20 == '(') {
   if ((VAR_15 =
       FUNC_11(VAR_15, &VAR_20)) == ((void*)0))
    goto bad;
  }

  if (*VAR_20 != ')')
   goto syntaxfail;
  break;

 case '!':
  if ((VAR_16 = FUNC_1(VAR_13)) == ((void*)0))
   goto callfail;
  FUNC_5(VAR_16, VAR_0, VAR_6);

  VAR_20++;
  if ((VAR_15 = FUNC_11(VAR_16, &VAR_20)) == ((void*)0))
   goto bad;

  if (*VAR_20 != ')')
   goto syntaxfail;
  break;

 default:
  VAR_17 = VAR_20;

  VAR_21 = FUNC_8(VAR_20, "()<>~=");
  VAR_20 += VAR_21;
  switch (*VAR_20) {
  case '~':
   VAR_22 = VAR_2;
   VAR_20++;
   break;
  case '<':
   VAR_22 = VAR_5;
   VAR_20++;
   break;
  case '>':
   VAR_22 = VAR_4;
   VAR_20++;
   break;
  case '=':
   VAR_22 = VAR_3;
   break;
  case '(':
  case ')':
  default:
   goto syntaxfail;
  }
  VAR_18 = ++VAR_20;


  if (FUNC_10(VAR_18, "*)", 2) == 0) {
   VAR_20++;
   if ((VAR_16 =
       FUNC_0(VAR_13, VAR_17, VAR_21)) == ((void*)0))
    goto bad;

   FUNC_5(VAR_16, VAR_0, VAR_8);
   break;
  }

  if ((VAR_16 = FUNC_1(VAR_13)) == ((void*)0))
   goto callfail;
  FUNC_5(VAR_16, VAR_0, VAR_22);

  if ((VAR_15 = FUNC_0(VAR_16, VAR_17, VAR_21)) == ((void*)0))
   goto callfail;

  VAR_21 = FUNC_8(VAR_18, "*)");
  if (VAR_21 == 0 && *VAR_20 != '*')
   goto syntaxfail;
  VAR_20 += VAR_21;
  if (*VAR_20 == '\0')
   goto syntaxfail;

  if (*VAR_20 == '*') {
   int VAR_23;

   VAR_20 = VAR_18;

   FUNC_5(VAR_16, VAR_0, VAR_9);

   if ((VAR_15 = FUNC_1(VAR_15)) == ((void*)0))
    goto callfail;

   for (VAR_23 = 1;; VAR_20++, VAR_23 = 0) {
    VAR_18 = VAR_20;

    VAR_21 = FUNC_8(VAR_18, "*)");
    if (VAR_21 == 0) {
     if (*VAR_20 == ')')
      break;
     else
      continue;
    }
    VAR_20 += VAR_21;
    if (*VAR_20 == '\0')
     goto syntaxfail;

    if (VAR_23)
     VAR_22 = VAR_12;
    else if (*VAR_20 == ')')
     VAR_22 = VAR_11;
    else
     VAR_22 = VAR_10;

    if ((VAR_19 = FUNC_7(VAR_18, VAR_21)) ==
        ((void*)0))
     goto callfail;
    VAR_15 = FUNC_0(VAR_15, VAR_19,
        FUNC_9(VAR_19));
    FUNC_6(VAR_19);
    if (VAR_15 == ((void*)0))
     goto callfail;
    FUNC_5(VAR_15, VAR_0, VAR_22);
    if (VAR_22 == VAR_11)
     break;
   }
   break;
  }

  if ((VAR_19 = FUNC_7(VAR_18, VAR_21)) == ((void*)0))
   goto callfail;
  VAR_15 = FUNC_0(VAR_15, VAR_19, FUNC_9(VAR_19));
  FUNC_6(VAR_19);
  if (VAR_15 == ((void*)0))
   goto callfail;
  break;
 }

 VAR_20++;

 *VAR_14 = VAR_20;
 return (VAR_16);

syntaxfail:
callfail:
bad:
 if (VAR_16 != ((void*)0))
  FUNC_3(VAR_16);
 FUNC_4(VAR_13, ((void*)0));
 return (((void*)0));
}
