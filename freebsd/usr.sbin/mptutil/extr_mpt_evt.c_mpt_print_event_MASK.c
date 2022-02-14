
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int LogSequence; int TimeStamp; int LogEntryQualifier; int* LogData; } ;
typedef TYPE_1__ MPI_LOG_0_ENTRY ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(MPI_LOG_0_ENTRY *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_1("%5d %7ds %4x ", VAR_0->LogSequence, VAR_0->TimeStamp,
     VAR_0->LogEntryQualifier);
 for (VAR_2 = 0; VAR_2 < 14; VAR_2++)
  FUNC_1("%02x ", VAR_0->LogData[VAR_2]);
 FUNC_1("|");
 for (VAR_2 = 0; VAR_2 < 14; VAR_2++)
  FUNC_1("%c", FUNC_0(VAR_0->LogData[VAR_2]) ? VAR_0->LogData[VAR_2] :
      '.');
 FUNC_1("|\n");
 FUNC_1("                    ");
 for (VAR_2 = 0; VAR_2 < 14; VAR_2++)
  FUNC_1("%02x ", VAR_0->LogData[VAR_2 + 14]);
 FUNC_1("|");
 for (VAR_2 = 0; VAR_2 < 14; VAR_2++)
  FUNC_1("%c", FUNC_0(VAR_0->LogData[VAR_2 + 14]) ?
      VAR_0->LogData[VAR_2 + 14] : '.');
 FUNC_1("|\n");
}
