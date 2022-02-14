
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlist {int n_type; int n_value; } ;




 scalar_t__ VAR_0 ;

 int FUNC_0 (struct nlist const*) ;


 scalar_t__ FUNC_1 (struct nlist const*) ;
 int VAR_1 ;
 int FUNC_2 (char*,char,char*,char*,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*,char*) ;
 char FUNC_5 (char) ;

__attribute__((used)) static void
FUNC_6(const struct nlist *VAR_2)
{
    char VAR_3[8];
    char VAR_4[8];
    char VAR_5;
    char *VAR_6;

    switch (VAR_2->n_type & ~VAR_1) {
    case 128: FUNC_4(VAR_3, "undf"); break;
    case 167: FUNC_4(VAR_3, "abs"); break;
    case 129: FUNC_4(VAR_3, "text"); break;
    case 161: FUNC_4(VAR_3, "data"); break;
    case 163: FUNC_4(VAR_3, "bss"); break;
    case 150: FUNC_4(VAR_3, "indr"); break;
    case 135: FUNC_4(VAR_3, "size"); break;
    case 162: FUNC_4(VAR_3, "comm"); break;
    case 140: FUNC_4(VAR_3, "seta"); break;
    case 137: FUNC_4(VAR_3, "sett"); break;
    case 138: FUNC_4(VAR_3, "setd"); break;
    case 139: FUNC_4(VAR_3, "setb"); break;
    case 136: FUNC_4(VAR_3, "setv"); break;
    case 154: FUNC_4(VAR_3, VAR_2->n_type&VAR_1 ? "fn" : "warn"); break;
    case 151: FUNC_4(VAR_3, "gsym"); break;
    case 153: FUNC_4(VAR_3, "fname"); break;
    case 152: FUNC_4(VAR_3, "fun"); break;
    case 130: FUNC_4(VAR_3, "stsym"); break;
    case 148: FUNC_4(VAR_3, "lcsym"); break;
    case 145: FUNC_4(VAR_3, "main"); break;
    case 144: FUNC_4(VAR_3, "pc"); break;
    case 141: FUNC_4(VAR_3, "rsym"); break;
    case 134: FUNC_4(VAR_3, "sline"); break;
    case 160: FUNC_4(VAR_3, "dsline"); break;
    case 164: FUNC_4(VAR_3, "bsline"); break;
    case 131: FUNC_4(VAR_3, "ssym"); break;
    case 133: FUNC_4(VAR_3, "so"); break;
    case 146: FUNC_4(VAR_3, "lsym"); break;
    case 165: FUNC_4(VAR_3, "bincl"); break;
    case 132: FUNC_4(VAR_3, "sol"); break;
    case 143: FUNC_4(VAR_3, "psym"); break;
    case 157: FUNC_4(VAR_3, "eincl"); break;
    case 156: FUNC_4(VAR_3, "entry"); break;
    case 149: FUNC_4(VAR_3, "lbrac"); break;
    case 155: FUNC_4(VAR_3, "excl"); break;
    case 142: FUNC_4(VAR_3, "rbrac"); break;
    case 166: FUNC_4(VAR_3, "bcomm"); break;
    case 158: FUNC_4(VAR_3, "ecomm"); break;
    case 159: FUNC_4(VAR_3, "ecoml"); break;
    case 147: FUNC_4(VAR_3, "leng"); break;
    default:
 FUNC_3(VAR_3, sizeof VAR_3, "%#02x", VAR_2->n_type);
 break;
    }

    if (VAR_2->n_type & VAR_1 && VAR_3[0] != '0')
 for (VAR_6 = VAR_3; *VAR_6 != '\0'; ++VAR_6)
     *VAR_6 = FUNC_5(*VAR_6);

    switch (FUNC_0(VAR_2)) {
    case 0: FUNC_4(VAR_4, ""); break;
    case 168: FUNC_4(VAR_4, "objt"); break;
    case 169: FUNC_4(VAR_4, "func"); break;
    default: FUNC_3(VAR_4, sizeof VAR_4, "%#01x", FUNC_0(VAR_2)); break;
    }

    VAR_5 = FUNC_1(VAR_2) == VAR_0 ? 'w' : ' ';

    FUNC_2("%c%-6s %-4s %8lx", VAR_5, VAR_3, VAR_4, VAR_2->n_value);
}
