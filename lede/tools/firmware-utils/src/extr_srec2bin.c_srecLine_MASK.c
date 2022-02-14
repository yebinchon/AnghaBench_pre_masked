
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* bit32u ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (void*,char) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,int) ;
 int VAR_1 ;
 void* FUNC_5 (char*,int) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;

int FUNC_7(char *VAR_3)
{
    char *VAR_4,VAR_5;
    int VAR_6,VAR_7,VAR_8;
    bit32u VAR_9;
    static bit32u VAR_10=0;

    VAR_1++;
    VAR_4=VAR_3;

    if (*VAR_3!='S')
      return(FUNC_1("Not an Srecord file",VAR_4));
    VAR_3++;
    if (FUNC_6(VAR_3)<4)
      return(FUNC_1("Srecord too short",VAR_4));

    VAR_5=*VAR_3++;

    VAR_7=FUNC_5(VAR_3,2);

    VAR_3 += 2;



     VAR_10++;
     FUNC_0(VAR_10);

    if ((VAR_7*2) != FUNC_6(VAR_3)) return(FUNC_1("Count field larger than record",VAR_4));

    if (!FUNC_4(VAR_3, VAR_7)) return(FUNC_1("Bad Checksum",VAR_4));

    switch(VAR_5)
    {
        case '0': if (VAR_7<3) return(FUNC_1("Invalid Srecord count field",VAR_4));
                  VAR_6=FUNC_5(VAR_3,4); VAR_3+=4; VAR_7-=2;
                  if (VAR_6) return(FUNC_1("Srecord 1 address not zero",VAR_4));
        break;
        case '1': if (VAR_7<3) return(FUNC_1("Invalid Srecord count field",VAR_4));
                  return(FUNC_1("Srecord Not valid for MIPS",VAR_4));
        break;
        case '2': if (VAR_7<4) return(FUNC_1("Invalid Srecord count field",VAR_4));
                  return(FUNC_1("Srecord Not valid for MIPS",VAR_4));
        break;
        case '3': if (VAR_7<5) return(FUNC_1("Invalid Srecord count field",VAR_4));
                  VAR_9=FUNC_5(VAR_3,8); VAR_3+=8; VAR_7-=4;
                  VAR_7--;
                  while(VAR_7)
                  {
                    VAR_8=FUNC_5(VAR_3,2); VAR_3+=2; VAR_7--;
                    FUNC_2(VAR_9, (char) (VAR_8 & 0xFF));
                    VAR_9++;
                  }
                  VAR_2++;
        break;
        case '4': return(FUNC_1("Invalid Srecord type",VAR_4));
        break;
        case '5': if (VAR_7<3) return(FUNC_1("Invalid Srecord count field",VAR_4));
                  VAR_6=FUNC_5(VAR_3,4); VAR_3+=4; VAR_7-=2;
                  if ((VAR_6|=VAR_2)) return(FUNC_1("Incorrect number of S3 Record processed",VAR_4));
        break;
        case '6': return(FUNC_1("Invalid Srecord type",VAR_4));
        break;
        case '7':
                  if (VAR_7<5) return(FUNC_1("Invalid Srecord count field",VAR_4));
                  VAR_9=FUNC_5(VAR_3,8); VAR_3+=8; VAR_7-=4;
                  if (VAR_7!=1) return(FUNC_1("Invalid Srecord count field",VAR_4));
                  FUNC_3(VAR_9);
        break;
        case '8': if (VAR_7<4) return(FUNC_1("Invalid Srecord count field",VAR_4));
                  return(FUNC_1("Srecord Not valid for MIPS",VAR_4));
        break;
        case '9': if (VAR_7<3) return(FUNC_1("Invalid Srecord count field",VAR_4));
                  return(FUNC_1("Srecord Not valid for MIPS",VAR_4));
        break;
        default:
        break;
    }
    return(VAR_0);
}
