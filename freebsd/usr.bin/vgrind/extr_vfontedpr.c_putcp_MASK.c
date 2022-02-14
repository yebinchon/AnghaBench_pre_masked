__attribute__((used)) static void
FUNC_0(register int VAR_0)
{

 switch(VAR_0) {

 case 0:
  break;

 case '\f':
  break;

 case '\r':
  break;

 case '{':
  FUNC_0("\\*(+K{\\*(-K");
  break;

 case '}':
  FUNC_0("\\*(+K}\\*(-K");
  break;

 case '\\':
  FUNC_0("\\e");
  break;

 case '_':
  FUNC_0("\\*_");
  break;

 case '-':
  FUNC_0("\\*-");
  break;

 case '`':
  FUNC_0("\\`");
  break;

 case '\'':
  FUNC_0("\\'");
  break;

 case '.':
  FUNC_0("\\&.");
  break;

 case '*':
  FUNC_0("\\fI*\\fP");
  break;

 case '/':
  FUNC_0("\\fI\\h'\\w' 'u-\\w'/'u'/\\fP");
  break;

 default:
  if (VAR_0 < 040)
   FUNC_0('^'), VAR_0 |= '@';
 case '\t':
 case '\n':
  FUNC_0(VAR_0);
 }
}
