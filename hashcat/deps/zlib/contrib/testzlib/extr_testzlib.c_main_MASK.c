
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {unsigned char* next_in; unsigned char* next_out; long total_in; long avail_in; int avail_out; long total_out; } ;
typedef TYPE_1__ z_stream ;
struct TYPE_16__ {int QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef double DWORD ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 double FUNC_2 (TYPE_2__,int ) ;
 TYPE_2__ FUNC_3 (TYPE_2__,int ) ;
 double FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,long*,unsigned char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (long) ;
 scalar_t__ FUNC_14 (unsigned char*,unsigned char*,long) ;
 int FUNC_15 (TYPE_1__*,int ,int) ;
 void* FUNC_16 (long,int) ;
 int FUNC_17 (char*,...) ;
 scalar_t__ FUNC_18 (unsigned char*,long) ;

int FUNC_19(int VAR_5, char *VAR_6[])
{
    int VAR_7=0x8000;
    int VAR_8=0x8000;
    int VAR_9=VAR_1 ;
    long VAR_10;
    unsigned char* VAR_11;
    long VAR_12;
    long VAR_13;
    long VAR_14=0;
    unsigned char* VAR_15;
    unsigned char* VAR_16;
    long VAR_17,VAR_18;
    DWORD VAR_19,VAR_20;
    LARGE_INTEGER VAR_21,VAR_22,VAR_23;

    if (VAR_5<=1)
    {
        FUNC_17("run TestZlib <File> [BlockSizeCompress] [BlockSizeUncompress] [compres. level]\n");
        return 0;
    }

    if (FUNC_5(VAR_6[1],&VAR_10,&VAR_11)==0)
    {
        FUNC_17("error reading %s\n",VAR_6[1]);
        return 1;
    }
    else FUNC_17("file %s read, %u bytes\n",VAR_6[1],VAR_10);

    if (VAR_5>=3)
        VAR_7=FUNC_6(VAR_6[2]);

    if (VAR_5>=4)
        VAR_8=FUNC_6(VAR_6[3]);

    if (VAR_5>=5)
        VAR_9=(int)FUNC_6(VAR_6[4]);

    VAR_12 = VAR_10 + (VAR_10/0x10) + 0x200;
    VAR_13 = VAR_12;

    VAR_15=(unsigned char*)FUNC_13(VAR_12 + VAR_7);

    FUNC_0(&VAR_21,VAR_0);
    VAR_19=FUNC_4();
    FUNC_1(&VAR_22);
    {
        z_stream VAR_24;
        int VAR_25=VAR_3;
        long VAR_26 = VAR_10;
        long VAR_27 = 0;
        int VAR_28=0;
        FUNC_15(&VAR_24,0,sizeof(z_stream));
        FUNC_9(&VAR_24,VAR_9);

        VAR_24.next_in = VAR_11;
        VAR_24.next_out = VAR_15;


        do
        {
            long VAR_29 = VAR_24.total_in;
            VAR_24.avail_in = FUNC_16(VAR_26,VAR_7);
            VAR_24.avail_out = VAR_7;
            VAR_25=FUNC_7(&VAR_24,(VAR_24.avail_in==VAR_26) ? VAR_2 : VAR_4);
            VAR_27 += (VAR_24.total_in-VAR_29);
            VAR_26 -= (VAR_24.total_in-VAR_29);
            VAR_28++;
        } while (VAR_25==VAR_3);

        VAR_17=VAR_24.total_out;
        FUNC_8(&VAR_24);
        VAR_19=FUNC_4()-VAR_19;
        VAR_20=FUNC_2(VAR_21,VAR_0);
        VAR_23=FUNC_3(VAR_22,VAR_0);
        FUNC_17("total compress size = %u, in %u step\n",VAR_17,VAR_28);
        FUNC_17("time = %u msec = %f sec\n",VAR_19,VAR_19/(double)1000.);
        FUNC_17("defcpr time QP = %u msec = %f sec\n",VAR_20,VAR_20/(double)1000.);
        FUNC_17("defcpr result rdtsc = %I64x\n\n",VAR_23.QuadPart);
    }

    VAR_15=(unsigned char*)FUNC_18(VAR_15,VAR_17);
    VAR_16=(unsigned char*)FUNC_13(VAR_13 + VAR_8);

    FUNC_0(&VAR_21,VAR_0);
    VAR_19=FUNC_4();
    FUNC_1(&VAR_22);
    {
        z_stream VAR_30;
        int VAR_31=VAR_3;
        long VAR_32 = VAR_17;
        long VAR_33 = 0;
        int VAR_34=0;
        FUNC_15(&VAR_30,0,sizeof(z_stream));
        FUNC_12(&VAR_30);

        VAR_30.next_in = VAR_15;
        VAR_30.next_out = VAR_16;


        do
        {
            long VAR_35 = VAR_30.total_in;
            VAR_30.avail_in = FUNC_16(VAR_32,VAR_8);
            VAR_30.avail_out = VAR_8;
            VAR_31=FUNC_10(&VAR_30,VAR_4);
            VAR_33 += (VAR_30.total_in-VAR_35);
            VAR_32 -= (VAR_30.total_in-VAR_35);
            VAR_34++;
        } while (VAR_31==VAR_3);

        VAR_18=VAR_30.total_out;
        FUNC_11(&VAR_30);
        VAR_19=FUNC_4()-VAR_19;
        VAR_20=FUNC_2(VAR_21,VAR_0);
        VAR_23=FUNC_3(VAR_22,VAR_0);
        FUNC_17("total uncompress size = %u, in %u step\n",VAR_18,VAR_34);
        FUNC_17("time = %u msec = %f sec\n",VAR_19,VAR_19/(double)1000.);
        FUNC_17("uncpr  time QP = %u msec = %f sec\n",VAR_20,VAR_20/(double)1000.);
        FUNC_17("uncpr  result rdtsc = %I64x\n\n",VAR_23.QuadPart);
    }

    if (VAR_18==VAR_10)
    {
        if (FUNC_14(VAR_11,VAR_16,VAR_10)==0)
            FUNC_17("compare ok\n");

    }

    return 0;
}
